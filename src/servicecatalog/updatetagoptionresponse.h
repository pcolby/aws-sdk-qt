// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETAGOPTIONRESPONSE_H
#define QTAWS_UPDATETAGOPTIONRESPONSE_H

#include "servicecatalogresponse.h"
#include "updatetagoptionrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateTagOptionResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT UpdateTagOptionResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    UpdateTagOptionResponse(const UpdateTagOptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTagOptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTagOptionResponse)
    Q_DISABLE_COPY(UpdateTagOptionResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
