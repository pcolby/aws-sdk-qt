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

#include "createworkloadshareresponse.h"
#include "createworkloadshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::CreateWorkloadShareResponse
 * \brief The CreateWorkloadShareResponse class provides an interace for WellArchitected CreateWorkloadShare responses.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>AWS Well-Architected Tool</fullname>
 * 
 *  This is the <i>AWS Well-Architected Tool API Reference</i>. The AWS Well-Architected Tool API provides programmatic
 *  access to the <a href="http://aws.amazon.com/well-architected-tool">AWS Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">AWS Management Console</a>. For information about the AWS
 *  Well-Architected Tool, see the <a href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">AWS
 *  Well-Architected Tool User
 *
 * \sa WellArchitectedClient::createWorkloadShare
 */

/*!
 * Constructs a CreateWorkloadShareResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorkloadShareResponse::CreateWorkloadShareResponse(
        const CreateWorkloadShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new CreateWorkloadShareResponsePrivate(this), parent)
{
    setRequest(new CreateWorkloadShareRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorkloadShareRequest * CreateWorkloadShareResponse::request() const
{
    Q_D(const CreateWorkloadShareResponse);
    return static_cast<const CreateWorkloadShareRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected CreateWorkloadShare \a response.
 */
void CreateWorkloadShareResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorkloadShareResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::CreateWorkloadShareResponsePrivate
 * \brief The CreateWorkloadShareResponsePrivate class provides private implementation for CreateWorkloadShareResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a CreateWorkloadShareResponsePrivate object with public implementation \a q.
 */
CreateWorkloadShareResponsePrivate::CreateWorkloadShareResponsePrivate(
    CreateWorkloadShareResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected CreateWorkloadShare response element from \a xml.
 */
void CreateWorkloadShareResponsePrivate::parseCreateWorkloadShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorkloadShareResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
