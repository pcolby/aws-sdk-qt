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

#include "createenvironmentresponse.h"
#include "createenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace finspace {

/*!
 * \class QtAws::finspace::CreateEnvironmentResponse
 * \brief The CreateEnvironmentResponse class provides an interace for finspace CreateEnvironment responses.
 *
 * \inmodule QtAwsfinspace
 *
 *  The FinSpace management service provides the APIs for managing the FinSpace environments.
 *
 * \sa finspaceClient::createEnvironment
 */

/*!
 * Constructs a CreateEnvironmentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEnvironmentResponse::CreateEnvironmentResponse(
        const CreateEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : finspaceResponse(new CreateEnvironmentResponsePrivate(this), parent)
{
    setRequest(new CreateEnvironmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEnvironmentRequest * CreateEnvironmentResponse::request() const
{
    Q_D(const CreateEnvironmentResponse);
    return static_cast<const CreateEnvironmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful finspace CreateEnvironment \a response.
 */
void CreateEnvironmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEnvironmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::finspace::CreateEnvironmentResponsePrivate
 * \brief The CreateEnvironmentResponsePrivate class provides private implementation for CreateEnvironmentResponse.
 * \internal
 *
 * \inmodule QtAwsfinspace
 */

/*!
 * Constructs a CreateEnvironmentResponsePrivate object with public implementation \a q.
 */
CreateEnvironmentResponsePrivate::CreateEnvironmentResponsePrivate(
    CreateEnvironmentResponse * const q) : finspaceResponsePrivate(q)
{

}

/*!
 * Parses a finspace CreateEnvironment response element from \a xml.
 */
void CreateEnvironmentResponsePrivate::parseCreateEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEnvironmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace finspace
} // namespace QtAws
