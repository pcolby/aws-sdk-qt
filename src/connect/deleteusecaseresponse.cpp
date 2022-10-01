// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteusecaseresponse.h"
#include "deleteusecaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::DeleteUseCaseResponse
 * \brief The DeleteUseCaseResponse class provides an interace for Connect DeleteUseCase responses.
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
 * \sa ConnectClient::deleteUseCase
 */

/*!
 * Constructs a DeleteUseCaseResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUseCaseResponse::DeleteUseCaseResponse(
        const DeleteUseCaseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new DeleteUseCaseResponsePrivate(this), parent)
{
    setRequest(new DeleteUseCaseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUseCaseRequest * DeleteUseCaseResponse::request() const
{
    Q_D(const DeleteUseCaseResponse);
    return static_cast<const DeleteUseCaseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect DeleteUseCase \a response.
 */
void DeleteUseCaseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteUseCaseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::DeleteUseCaseResponsePrivate
 * \brief The DeleteUseCaseResponsePrivate class provides private implementation for DeleteUseCaseResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a DeleteUseCaseResponsePrivate object with public implementation \a q.
 */
DeleteUseCaseResponsePrivate::DeleteUseCaseResponsePrivate(
    DeleteUseCaseResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect DeleteUseCase response element from \a xml.
 */
void DeleteUseCaseResponsePrivate::parseDeleteUseCaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUseCaseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
