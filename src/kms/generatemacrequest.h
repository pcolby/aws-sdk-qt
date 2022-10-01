// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEMACREQUEST_H
#define QTAWS_GENERATEMACREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class GenerateMacRequestPrivate;

class QTAWSKMS_EXPORT GenerateMacRequest : public KmsRequest {

public:
    GenerateMacRequest(const GenerateMacRequest &other);
    GenerateMacRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateMacRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
