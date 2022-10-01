// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createquantumtaskresponse.h"
#include "createquantumtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::CreateQuantumTaskResponse
 * \brief The CreateQuantumTaskResponse class provides an interace for Braket CreateQuantumTask responses.
 *
 * \inmodule QtAwsBraket
 *
 *  The Amazon Braket API Reference provides information about the operations and structures supported in Amazon
 * 
 *  Braket>
 * 
 *  Additional
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/braket/latest/developerguide/what-is-braket.html">Amazon Braket Developer Guide</a>
 *
 * \sa BraketClient::createQuantumTask
 */

/*!
 * Constructs a CreateQuantumTaskResponse object for \a reply to \a request, with parent \a parent.
 */
CreateQuantumTaskResponse::CreateQuantumTaskResponse(
        const CreateQuantumTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BraketResponse(new CreateQuantumTaskResponsePrivate(this), parent)
{
    setRequest(new CreateQuantumTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateQuantumTaskRequest * CreateQuantumTaskResponse::request() const
{
    Q_D(const CreateQuantumTaskResponse);
    return static_cast<const CreateQuantumTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Braket CreateQuantumTask \a response.
 */
void CreateQuantumTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateQuantumTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Braket::CreateQuantumTaskResponsePrivate
 * \brief The CreateQuantumTaskResponsePrivate class provides private implementation for CreateQuantumTaskResponse.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a CreateQuantumTaskResponsePrivate object with public implementation \a q.
 */
CreateQuantumTaskResponsePrivate::CreateQuantumTaskResponsePrivate(
    CreateQuantumTaskResponse * const q) : BraketResponsePrivate(q)
{

}

/*!
 * Parses a Braket CreateQuantumTask response element from \a xml.
 */
void CreateQuantumTaskResponsePrivate::parseCreateQuantumTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateQuantumTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Braket
} // namespace QtAws
