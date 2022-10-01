// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetasktemplateresponse.h"
#include "updatetasktemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::UpdateTaskTemplateResponse
 * \brief The UpdateTaskTemplateResponse class provides an interace for Connect UpdateTaskTemplate responses.
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
 * \sa ConnectClient::updateTaskTemplate
 */

/*!
 * Constructs a UpdateTaskTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTaskTemplateResponse::UpdateTaskTemplateResponse(
        const UpdateTaskTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new UpdateTaskTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateTaskTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTaskTemplateRequest * UpdateTaskTemplateResponse::request() const
{
    Q_D(const UpdateTaskTemplateResponse);
    return static_cast<const UpdateTaskTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect UpdateTaskTemplate \a response.
 */
void UpdateTaskTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTaskTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::UpdateTaskTemplateResponsePrivate
 * \brief The UpdateTaskTemplateResponsePrivate class provides private implementation for UpdateTaskTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a UpdateTaskTemplateResponsePrivate object with public implementation \a q.
 */
UpdateTaskTemplateResponsePrivate::UpdateTaskTemplateResponsePrivate(
    UpdateTaskTemplateResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect UpdateTaskTemplate response element from \a xml.
 */
void UpdateTaskTemplateResponsePrivate::parseUpdateTaskTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTaskTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
