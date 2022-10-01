// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreplicationconfigurationresponse.h"
#include "createreplicationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::CreateReplicationConfigurationResponse
 * \brief The CreateReplicationConfigurationResponse class provides an interace for Efs CreateReplicationConfiguration responses.
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
 * \sa EfsClient::createReplicationConfiguration
 */

/*!
 * Constructs a CreateReplicationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateReplicationConfigurationResponse::CreateReplicationConfigurationResponse(
        const CreateReplicationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new CreateReplicationConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateReplicationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateReplicationConfigurationRequest * CreateReplicationConfigurationResponse::request() const
{
    Q_D(const CreateReplicationConfigurationResponse);
    return static_cast<const CreateReplicationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Efs CreateReplicationConfiguration \a response.
 */
void CreateReplicationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateReplicationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::CreateReplicationConfigurationResponsePrivate
 * \brief The CreateReplicationConfigurationResponsePrivate class provides private implementation for CreateReplicationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a CreateReplicationConfigurationResponsePrivate object with public implementation \a q.
 */
CreateReplicationConfigurationResponsePrivate::CreateReplicationConfigurationResponsePrivate(
    CreateReplicationConfigurationResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs CreateReplicationConfiguration response element from \a xml.
 */
void CreateReplicationConfigurationResponsePrivate::parseCreateReplicationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReplicationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws
