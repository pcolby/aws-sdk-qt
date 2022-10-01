// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbackuppolicyresponse.h"
#include "putbackuppolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::PutBackupPolicyResponse
 * \brief The PutBackupPolicyResponse class provides an interace for Efs PutBackupPolicy responses.
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
 * \sa EfsClient::putBackupPolicy
 */

/*!
 * Constructs a PutBackupPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutBackupPolicyResponse::PutBackupPolicyResponse(
        const PutBackupPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new PutBackupPolicyResponsePrivate(this), parent)
{
    setRequest(new PutBackupPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBackupPolicyRequest * PutBackupPolicyResponse::request() const
{
    Q_D(const PutBackupPolicyResponse);
    return static_cast<const PutBackupPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Efs PutBackupPolicy \a response.
 */
void PutBackupPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBackupPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::PutBackupPolicyResponsePrivate
 * \brief The PutBackupPolicyResponsePrivate class provides private implementation for PutBackupPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a PutBackupPolicyResponsePrivate object with public implementation \a q.
 */
PutBackupPolicyResponsePrivate::PutBackupPolicyResponsePrivate(
    PutBackupPolicyResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs PutBackupPolicy response element from \a xml.
 */
void PutBackupPolicyResponsePrivate::parsePutBackupPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBackupPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws
