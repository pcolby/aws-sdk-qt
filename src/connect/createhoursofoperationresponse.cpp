// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createhoursofoperationresponse.h"
#include "createhoursofoperationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::CreateHoursOfOperationResponse
 * \brief The CreateHoursOfOperationResponse class provides an interace for Connect CreateHoursOfOperation responses.
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
 * \sa ConnectClient::createHoursOfOperation
 */

/*!
 * Constructs a CreateHoursOfOperationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateHoursOfOperationResponse::CreateHoursOfOperationResponse(
        const CreateHoursOfOperationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new CreateHoursOfOperationResponsePrivate(this), parent)
{
    setRequest(new CreateHoursOfOperationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateHoursOfOperationRequest * CreateHoursOfOperationResponse::request() const
{
    Q_D(const CreateHoursOfOperationResponse);
    return static_cast<const CreateHoursOfOperationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect CreateHoursOfOperation \a response.
 */
void CreateHoursOfOperationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateHoursOfOperationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::CreateHoursOfOperationResponsePrivate
 * \brief The CreateHoursOfOperationResponsePrivate class provides private implementation for CreateHoursOfOperationResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a CreateHoursOfOperationResponsePrivate object with public implementation \a q.
 */
CreateHoursOfOperationResponsePrivate::CreateHoursOfOperationResponsePrivate(
    CreateHoursOfOperationResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect CreateHoursOfOperation response element from \a xml.
 */
void CreateHoursOfOperationResponsePrivate::parseCreateHoursOfOperationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHoursOfOperationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
