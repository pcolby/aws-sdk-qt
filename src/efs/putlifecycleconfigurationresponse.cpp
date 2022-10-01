// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putlifecycleconfigurationresponse.h"
#include "putlifecycleconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::PutLifecycleConfigurationResponse
 * \brief The PutLifecycleConfigurationResponse class provides an interace for Efs PutLifecycleConfiguration responses.
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
 * \sa EfsClient::putLifecycleConfiguration
 */

/*!
 * Constructs a PutLifecycleConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutLifecycleConfigurationResponse::PutLifecycleConfigurationResponse(
        const PutLifecycleConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new PutLifecycleConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutLifecycleConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutLifecycleConfigurationRequest * PutLifecycleConfigurationResponse::request() const
{
    Q_D(const PutLifecycleConfigurationResponse);
    return static_cast<const PutLifecycleConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Efs PutLifecycleConfiguration \a response.
 */
void PutLifecycleConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutLifecycleConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::PutLifecycleConfigurationResponsePrivate
 * \brief The PutLifecycleConfigurationResponsePrivate class provides private implementation for PutLifecycleConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a PutLifecycleConfigurationResponsePrivate object with public implementation \a q.
 */
PutLifecycleConfigurationResponsePrivate::PutLifecycleConfigurationResponsePrivate(
    PutLifecycleConfigurationResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs PutLifecycleConfiguration response element from \a xml.
 */
void PutLifecycleConfigurationResponsePrivate::parsePutLifecycleConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutLifecycleConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws
