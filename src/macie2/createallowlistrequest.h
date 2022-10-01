// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALLOWLISTREQUEST_H
#define QTAWS_CREATEALLOWLISTREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class CreateAllowListRequestPrivate;

class QTAWSMACIE2_EXPORT CreateAllowListRequest : public Macie2Request {

public:
    CreateAllowListRequest(const CreateAllowListRequest &other);
    CreateAllowListRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAllowListRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
