// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelquantumtaskresponse.h"
#include "cancelquantumtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::CancelQuantumTaskResponse
 * \brief The CancelQuantumTaskResponse class provides an interace for Braket CancelQuantumTask responses.
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
 * \sa BraketClient::cancelQuantumTask
 */

/*!
 * Constructs a CancelQuantumTaskResponse object for \a reply to \a request, with parent \a parent.
 */
CancelQuantumTaskResponse::CancelQuantumTaskResponse(
        const CancelQuantumTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BraketResponse(new CancelQuantumTaskResponsePrivate(this), parent)
{
    setRequest(new CancelQuantumTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelQuantumTaskRequest * CancelQuantumTaskResponse::request() const
{
    Q_D(const CancelQuantumTaskResponse);
    return static_cast<const CancelQuantumTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Braket CancelQuantumTask \a response.
 */
void CancelQuantumTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelQuantumTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Braket::CancelQuantumTaskResponsePrivate
 * \brief The CancelQuantumTaskResponsePrivate class provides private implementation for CancelQuantumTaskResponse.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a CancelQuantumTaskResponsePrivate object with public implementation \a q.
 */
CancelQuantumTaskResponsePrivate::CancelQuantumTaskResponsePrivate(
    CancelQuantumTaskResponse * const q) : BraketResponsePrivate(q)
{

}

/*!
 * Parses a Braket CancelQuantumTask response element from \a xml.
 */
void CancelQuantumTaskResponsePrivate::parseCancelQuantumTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelQuantumTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Braket
} // namespace QtAws
