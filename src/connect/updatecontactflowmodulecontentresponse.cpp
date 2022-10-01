// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecontactflowmodulecontentresponse.h"
#include "updatecontactflowmodulecontentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::UpdateContactFlowModuleContentResponse
 * \brief The UpdateContactFlowModuleContentResponse class provides an interace for Connect UpdateContactFlowModuleContent responses.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an Amazon Web Services service by using an endpoint. For a list of Amazon Connect
 *  endpoints, see <a href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::updateContactFlowModuleContent
 */

/*!
 * Constructs a UpdateContactFlowModuleContentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateContactFlowModuleContentResponse::UpdateContactFlowModuleContentResponse(
        const UpdateContactFlowModuleContentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new UpdateContactFlowModuleContentResponsePrivate(this), parent)
{
    setRequest(new UpdateContactFlowModuleContentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateContactFlowModuleContentRequest * UpdateContactFlowModuleContentResponse::request() const
{
    Q_D(const UpdateContactFlowModuleContentResponse);
    return static_cast<const UpdateContactFlowModuleContentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect UpdateContactFlowModuleContent \a response.
 */
void UpdateContactFlowModuleContentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateContactFlowModuleContentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::UpdateContactFlowModuleContentResponsePrivate
 * \brief The UpdateContactFlowModuleContentResponsePrivate class provides private implementation for UpdateContactFlowModuleContentResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a UpdateContactFlowModuleContentResponsePrivate object with public implementation \a q.
 */
UpdateContactFlowModuleContentResponsePrivate::UpdateContactFlowModuleContentResponsePrivate(
    UpdateContactFlowModuleContentResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect UpdateContactFlowModuleContent response element from \a xml.
 */
void UpdateContactFlowModuleContentResponsePrivate::parseUpdateContactFlowModuleContentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateContactFlowModuleContentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
