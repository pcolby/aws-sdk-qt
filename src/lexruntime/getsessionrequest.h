// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSESSIONREQUEST_H
#define QTAWS_GETSESSIONREQUEST_H

#include "lexruntimerequest.h"

namespace QtAws {
namespace LexRuntime {

class GetSessionRequestPrivate;

class QTAWSLEXRUNTIME_EXPORT GetSessionRequest : public LexRuntimeRequest {

public:
    GetSessionRequest(const GetSessionRequest &other);
    GetSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSessionRequest)

};

} // namespace LexRuntime
} // namespace QtAws

#endif
