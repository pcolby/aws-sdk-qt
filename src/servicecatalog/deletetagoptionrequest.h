// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAGOPTIONREQUEST_H
#define QTAWS_DELETETAGOPTIONREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DeleteTagOptionRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT DeleteTagOptionRequest : public ServiceCatalogRequest {

public:
    DeleteTagOptionRequest(const DeleteTagOptionRequest &other);
    DeleteTagOptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTagOptionRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
