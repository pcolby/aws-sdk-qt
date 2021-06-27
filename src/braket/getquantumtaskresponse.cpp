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
    return static_cast<const GetQuantumTaskRequest *>(BraketResponse::request());
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
