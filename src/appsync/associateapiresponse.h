// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAPIRESPONSE_H
#define QTAWS_ASSOCIATEAPIRESPONSE_H

#include "appsyncresponse.h"
#include "associateapirequest.h"

namespace QtAws {
namespace AppSync {

class AssociateApiResponsePrivate;

class QTAWSAPPSYNC_EXPORT AssociateApiResponse : public AppSyncResponse {
    Q_OBJECT

public:
    AssociateApiResponse(const AssociateApiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateApiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateApiResponse)
    Q_DISABLE_COPY(AssociateApiResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
