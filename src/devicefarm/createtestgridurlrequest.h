// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETESTGRIDURLREQUEST_H
#define QTAWS_CREATETESTGRIDURLREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class CreateTestGridUrlRequestPrivate;

class QTAWSDEVICEFARM_EXPORT CreateTestGridUrlRequest : public DeviceFarmRequest {

public:
    CreateTestGridUrlRequest(const CreateTestGridUrlRequest &other);
    CreateTestGridUrlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTestGridUrlRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
