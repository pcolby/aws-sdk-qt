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

#include "createdatarepositorytaskresponse.h"
#include "createdatarepositorytaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::CreateDataRepositoryTaskResponse
 * \brief The CreateDataRepositoryTaskResponse class provides an interace for FSx CreateDataRepositoryTask responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::createDataRepositoryTask
 */

/*!
 * Constructs a CreateDataRepositoryTaskResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDataRepositoryTaskResponse::CreateDataRepositoryTaskResponse(
        const CreateDataRepositoryTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new CreateDataRepositoryTaskResponsePrivate(this), parent)
{
    setRequest(new CreateDataRepositoryTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDataRepositoryTaskRequest * CreateDataRepositoryTaskResponse::request() const
{
    return static_cast<const CreateDataRepositoryTaskRequest *>(FSxResponse::request());
}

/*!
 * \reimp
 * Parses a successful FSx CreateDataRepositoryTask \a response.
 */
void CreateDataRepositoryTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDataRepositoryTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::CreateDataRepositoryTaskResponsePrivate
 * \brief The CreateDataRepositoryTaskResponsePrivate class provides private implementation for CreateDataRepositoryTaskResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a CreateDataRepositoryTaskResponsePrivate object with public implementation \a q.
 */
CreateDataRepositoryTaskResponsePrivate::CreateDataRepositoryTaskResponsePrivate(
    CreateDataRepositoryTaskResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx CreateDataRepositoryTask response element from \a xml.
 */
void CreateDataRepositoryTaskResponsePrivate::parseCreateDataRepositoryTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDataRepositoryTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
