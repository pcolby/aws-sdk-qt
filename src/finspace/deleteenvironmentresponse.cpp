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

#include "deleteenvironmentresponse.h"
#include "deleteenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace finspace {

/*!
 * \class QtAws::finspace::DeleteEnvironmentResponse
 * \brief The DeleteEnvironmentResponse class provides an interace for finspace DeleteEnvironment responses.
 *
 * \inmodule QtAwsfinspace
 *
 *  The FinSpace management service provides the APIs for managing the FinSpace environments.
 *
 * \sa finspaceClient::deleteEnvironment
 */

/*!
 * Constructs a DeleteEnvironmentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEnvironmentResponse::DeleteEnvironmentResponse(
        const DeleteEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : finspaceResponse(new DeleteEnvironmentResponsePrivate(this), parent)
{
    setRequest(new DeleteEnvironmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEnvironmentRequest * DeleteEnvironmentResponse::request() const
{
    Q_D(const DeleteEnvironmentResponse);
    return static_cast<const DeleteEnvironmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful finspace DeleteEnvironment \a response.
 */
void DeleteEnvironmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEnvironmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::finspace::DeleteEnvironmentResponsePrivate
 * \brief The DeleteEnvironmentResponsePrivate class provides private implementation for DeleteEnvironmentResponse.
 * \internal
 *
 * \inmodule QtAwsfinspace
 */

/*!
 * Constructs a DeleteEnvironmentResponsePrivate object with public implementation \a q.
 */
DeleteEnvironmentResponsePrivate::DeleteEnvironmentResponsePrivate(
    DeleteEnvironmentResponse * const q) : finspaceResponsePrivate(q)
{

}

/*!
 * Parses a finspace DeleteEnvironment response element from \a xml.
 */
void DeleteEnvironmentResponsePrivate::parseDeleteEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEnvironmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace finspace
} // namespace QtAws
