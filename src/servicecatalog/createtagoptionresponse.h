// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAGOPTIONRESPONSE_H
#define QTAWS_CREATETAGOPTIONRESPONSE_H

#include "servicecatalogresponse.h"
#include "createtagoptionrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateTagOptionResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT CreateTagOptionResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    CreateTagOptionResponse(const CreateTagOptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTagOptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTagOptionResponse)
    Q_DISABLE_COPY(CreateTagOptionResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
