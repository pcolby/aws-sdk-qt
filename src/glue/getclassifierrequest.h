// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLASSIFIERREQUEST_H
#define QTAWS_GETCLASSIFIERREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetClassifierRequestPrivate;

class QTAWSGLUE_EXPORT GetClassifierRequest : public GlueRequest {

public:
    GetClassifierRequest(const GetClassifierRequest &other);
    GetClassifierRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetClassifierRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
