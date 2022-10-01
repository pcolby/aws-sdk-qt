// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaccountaliasresponse.h"
#include "deleteaccountaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SupportApp {

/*!
 * \class QtAws::SupportApp::DeleteAccountAliasResponse
 * \brief The DeleteAccountAliasResponse class provides an interace for SupportApp DeleteAccountAlias responses.
 *
 * \inmodule QtAwsSupportApp
 *
 *  <fullname>Amazon Web Services Support App in Slack</fullname>
 * 
 *  You can use the Amazon Web Services Support App in Slack API to manage your support cases in Slack for your Amazon Web
 *  Services account. After you configure your Slack workspace and channel with the Amazon Web Services Support App, you can
 *  perform the following tasks directly in your Slack
 * 
 *  channel> <ul> <li>
 * 
 *  Create, search, update, and resolve your support
 * 
 *  case> </li> <li>
 * 
 *  Request service quota increases for your
 * 
 *  accoun> </li> <li>
 * 
 *  Invite Amazon Web Services Support agents to your channel so that you can chat directly about your support
 * 
 *  case> </li> </ul>
 * 
 *  For more information about how to perform these actions in Slack, see the following documentation in the <i>Amazon Web
 *  Services Support User
 * 
 *  Guide</i>> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/awssupport/latest/user/aws-support-app-for-slack.html">Amazon Web Services Support
 *  App in Slack</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/awssupport/latest/user/joining-a-live-chat-session.html">Joining a live chat
 *  session with Amazon Web Services Support</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/awssupport/latest/user/service-quota-increase.html">Requesting service quota
 *  increases</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/awssupport/latest/user/support-app-commands.html">Amazon Web Services Support App
 *  commands in Slack</a>
 * 
 *  </p </li> </ul>
 * 
 *  You can also use the Amazon Web Services Management Console instead of the Amazon Web Services Support App API to manage
 *  your Slack configurations. For more information, see <a
 *  href="https://docs.aws.amazon.com/awssupport/latest/user/authorize-slack-workspace.html">Authorize a Slack workspace to
 *  enable the Amazon Web Services Support
 * 
 *  App</a>> <note> <ul> <li>
 * 
 *  You must have a Business or Enterprise Support plan to use the Amazon Web Services Support App API.
 * 
 *  </p </li> <li>
 * 
 *  For more information about the Amazon Web Services Support App endpoints, see the <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/awssupport.html#awssupport_app_region">Amazon Web Services Support
 *  App in Slack endpoints</a> in the <i>Amazon Web Services General
 *
 * \sa SupportAppClient::deleteAccountAlias
 */

/*!
 * Constructs a DeleteAccountAliasResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAccountAliasResponse::DeleteAccountAliasResponse(
        const DeleteAccountAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SupportAppResponse(new DeleteAccountAliasResponsePrivate(this), parent)
{
    setRequest(new DeleteAccountAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAccountAliasRequest * DeleteAccountAliasResponse::request() const
{
    Q_D(const DeleteAccountAliasResponse);
    return static_cast<const DeleteAccountAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SupportApp DeleteAccountAlias \a response.
 */
void DeleteAccountAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAccountAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SupportApp::DeleteAccountAliasResponsePrivate
 * \brief The DeleteAccountAliasResponsePrivate class provides private implementation for DeleteAccountAliasResponse.
 * \internal
 *
 * \inmodule QtAwsSupportApp
 */

/*!
 * Constructs a DeleteAccountAliasResponsePrivate object with public implementation \a q.
 */
DeleteAccountAliasResponsePrivate::DeleteAccountAliasResponsePrivate(
    DeleteAccountAliasResponse * const q) : SupportAppResponsePrivate(q)
{

}

/*!
 * Parses a SupportApp DeleteAccountAlias response element from \a xml.
 */
void DeleteAccountAliasResponsePrivate::parseDeleteAccountAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAccountAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SupportApp
} // namespace QtAws
