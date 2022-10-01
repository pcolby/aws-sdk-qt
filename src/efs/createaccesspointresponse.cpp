// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createaccesspointresponse.h"
#include "createaccesspointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::CreateAccessPointResponse
 * \brief The CreateAccessPointResponse class provides an interace for Efs CreateAccessPoint responses.
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
 * \sa EfsClient::createAccessPoint
 */

/*!
 * Constructs a CreateAccessPointResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAccessPointResponse::CreateAccessPointResponse(
        const CreateAccessPointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new CreateAccessPointResponsePrivate(this), parent)
{
    setRequest(new CreateAccessPointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAccessPointRequest * CreateAccessPointResponse::request() const
{
    Q_D(const CreateAccessPointResponse);
    return static_cast<const CreateAccessPointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Efs CreateAccessPoint \a response.
 */
void CreateAccessPointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAccessPointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::CreateAccessPointResponsePrivate
 * \brief The CreateAccessPointResponsePrivate class provides private implementation for CreateAccessPointResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a CreateAccessPointResponsePrivate object with public implementation \a q.
 */
CreateAccessPointResponsePrivate::CreateAccessPointResponsePrivate(
    CreateAccessPointResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs CreateAccessPoint response element from \a xml.
 */
void CreateAccessPointResponsePrivate::parseCreateAccessPointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAccessPointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws
