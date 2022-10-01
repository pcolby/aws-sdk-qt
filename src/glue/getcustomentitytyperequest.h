// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCUSTOMENTITYTYPEREQUEST_H
#define QTAWS_GETCUSTOMENTITYTYPEREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetCustomEntityTypeRequestPrivate;

class QTAWSGLUE_EXPORT GetCustomEntityTypeRequest : public GlueRequest {

public:
    GetCustomEntityTypeRequest(const GetCustomEntityTypeRequest &other);
    GetCustomEntityTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCustomEntityTypeRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
