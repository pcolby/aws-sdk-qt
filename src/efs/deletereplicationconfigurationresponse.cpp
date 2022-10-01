// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereplicationconfigurationresponse.h"
#include "deletereplicationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DeleteReplicationConfigurationResponse
 * \brief The DeleteReplicationConfigurationResponse class provides an interace for Efs DeleteReplicationConfiguration responses.
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
 * \sa EfsClient::deleteReplicationConfiguration
 */

/*!
 * Constructs a DeleteReplicationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReplicationConfigurationResponse::DeleteReplicationConfigurationResponse(
        const DeleteReplicationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new DeleteReplicationConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteReplicationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReplicationConfigurationRequest * DeleteReplicationConfigurationResponse::request() const
{
    Q_D(const DeleteReplicationConfigurationResponse);
    return static_cast<const DeleteReplicationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Efs DeleteReplicationConfiguration \a response.
 */
void DeleteReplicationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReplicationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::DeleteReplicationConfigurationResponsePrivate
 * \brief The DeleteReplicationConfigurationResponsePrivate class provides private implementation for DeleteReplicationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a DeleteReplicationConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteReplicationConfigurationResponsePrivate::DeleteReplicationConfigurationResponsePrivate(
    DeleteReplicationConfigurationResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs DeleteReplicationConfiguration response element from \a xml.
 */
void DeleteReplicationConfigurationResponsePrivate::parseDeleteReplicationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReplicationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws
