// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMENTITYTYPESREQUEST_H
#define QTAWS_LISTCUSTOMENTITYTYPESREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class ListCustomEntityTypesRequestPrivate;

class QTAWSGLUE_EXPORT ListCustomEntityTypesRequest : public GlueRequest {

public:
    ListCustomEntityTypesRequest(const ListCustomEntityTypesRequest &other);
    ListCustomEntityTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCustomEntityTypesRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
