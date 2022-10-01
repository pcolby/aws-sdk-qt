// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "lookuppolicyresponse.h"
#include "lookuppolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::LookupPolicyResponse
 * \brief The LookupPolicyResponse class provides an interace for CloudDirectory LookupPolicy responses.
 *
 * \inmodule QtAwsCloudDirectory
 *
 *  <fullname>Amazon Cloud Directory</fullname>
 * 
 *  Amazon Cloud Directory is a component of the AWS Directory Service that simplifies the development and management of
 *  cloud-scale web, mobile, and IoT applications. This guide describes the Cloud Directory operations that you can call
 *  programmatically and includes detailed information on data types and errors. For information about Cloud Directory
 *  features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/what_is_cloud_directory.html">Amazon Cloud
 *  Directory Developer
 *
 * \sa CloudDirectoryClient::lookupPolicy
 */

/*!
 * Constructs a LookupPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
LookupPolicyResponse::LookupPolicyResponse(
        const LookupPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new LookupPolicyResponsePrivate(this), parent)
{
    setRequest(new LookupPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const LookupPolicyRequest * LookupPolicyResponse::request() const
{
    Q_D(const LookupPolicyResponse);
    return static_cast<const LookupPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory LookupPolicy \a response.
 */
void LookupPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(LookupPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::LookupPolicyResponsePrivate
 * \brief The LookupPolicyResponsePrivate class provides private implementation for LookupPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a LookupPolicyResponsePrivate object with public implementation \a q.
 */
LookupPolicyResponsePrivate::LookupPolicyResponsePrivate(
    LookupPolicyResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory LookupPolicy response element from \a xml.
 */
void LookupPolicyResponsePrivate::parseLookupPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("LookupPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
