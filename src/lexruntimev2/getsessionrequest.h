// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSESSIONREQUEST_H
#define QTAWS_GETSESSIONREQUEST_H

#include "lexruntimev2request.h"

namespace QtAws {
namespace LexRuntimeV2 {

class GetSessionRequestPrivate;

class QTAWSLEXRUNTIMEV2_EXPORT GetSessionRequest : public LexRuntimeV2Request {

public:
    GetSessionRequest(const GetSessionRequest &other);
    GetSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSessionRequest)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
