// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEPHONENUMBERREQUEST_H
#define QTAWS_BATCHUPDATEPHONENUMBERREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class BatchUpdatePhoneNumberRequestPrivate;

class QTAWSCHIME_EXPORT BatchUpdatePhoneNumberRequest : public ChimeRequest {

public:
    BatchUpdatePhoneNumberRequest(const BatchUpdatePhoneNumberRequest &other);
    BatchUpdatePhoneNumberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchUpdatePhoneNumberRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
