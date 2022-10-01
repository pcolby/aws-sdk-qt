// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLEREQUEST_H
#define QTAWS_GETTABLEREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetTableRequestPrivate;

class QTAWSGLUE_EXPORT GetTableRequest : public GlueRequest {

public:
    GetTableRequest(const GetTableRequest &other);
    GetTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTableRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
