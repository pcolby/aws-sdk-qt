// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getquantumtaskresponse.h"
#include "getquantumtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::GetQuantumTaskResponse
 * \brief The GetQuantumTaskResponse class provides an interace for Braket GetQuantumTask responses.
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
 * \sa BraketClient::getQuantumTask
 */

/*!
 * Constructs a GetQuantumTaskResponse object for \a reply to \a request, with parent \a parent.
 */
GetQuantumTaskResponse::GetQuantumTaskResponse(
        const GetQuantumTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BraketResponse(new GetQuantumTaskResponsePrivate(this), parent)
{
    setRequest(new GetQuantumTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetQuantumTaskRequest * GetQuantumTaskResponse::request() const
{
    Q_D(const GetQuantumTaskResponse);
    return static_cast<const GetQuantumTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Braket GetQuantumTask \a response.
 */
void GetQuantumTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetQuantumTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Braket::GetQuantumTaskResponsePrivate
 * \brief The GetQuantumTaskResponsePrivate class provides private implementation for GetQuantumTaskResponse.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a GetQuantumTaskResponsePrivate object with public implementation \a q.
 */
GetQuantumTaskResponsePrivate::GetQuantumTaskResponsePrivate(
    GetQuantumTaskResponse * const q) : BraketResponsePrivate(q)
{

}

/*!
 * Parses a Braket GetQuantumTask response element from \a xml.
 */
void GetQuantumTaskResponsePrivate::parseGetQuantumTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQuantumTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Braket
} // namespace QtAws
