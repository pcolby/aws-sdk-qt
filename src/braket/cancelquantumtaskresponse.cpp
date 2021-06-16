/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
