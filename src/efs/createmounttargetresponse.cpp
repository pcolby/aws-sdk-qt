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

#include "createmounttargetresponse.h"
#include "createmounttargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::CreateMountTargetResponse
 * \brief The CreateMountTargetResponse class provides an interace for Efs CreateMountTarget responses.
 *
 * \inmodule QtAwsEfs
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 Linux and Mac
 *  instances in the Amazon Web Services Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking
 *  automatically as you add and remove files, so that your applications have the storage they need, when they need it. For
 *  more information, see the <a href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File
 *  System API Reference</a> and the <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File
 *  System User
 *
 * \sa EfsClient::createMountTarget
 */

/*!
 * Constructs a CreateMountTargetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMountTargetResponse::CreateMountTargetResponse(
        const CreateMountTargetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new CreateMountTargetResponsePrivate(this), parent)
{
    setRequest(new CreateMountTargetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMountTargetRequest * CreateMountTargetResponse::request() const
{
    Q_D(const CreateMountTargetResponse);
    return static_cast<const CreateMountTargetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Efs CreateMountTarget \a response.
 */
void CreateMountTargetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMountTargetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::CreateMountTargetResponsePrivate
 * \brief The CreateMountTargetResponsePrivate class provides private implementation for CreateMountTargetResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a CreateMountTargetResponsePrivate object with public implementation \a q.
 */
CreateMountTargetResponsePrivate::CreateMountTargetResponsePrivate(
    CreateMountTargetResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs CreateMountTarget response element from \a xml.
 */
void CreateMountTargetResponsePrivate::parseCreateMountTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMountTargetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws
