// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPLATEREQUEST_H
#define QTAWS_GETTEMPLATEREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class GetTemplateRequestPrivate;

class QTAWSSES_EXPORT GetTemplateRequest : public SesRequest {

public:
    GetTemplateRequest(const GetTemplateRequest &other);
    GetTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTemplateRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
