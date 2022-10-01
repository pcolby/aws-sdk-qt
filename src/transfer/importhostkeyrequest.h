// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTHOSTKEYREQUEST_H
#define QTAWS_IMPORTHOSTKEYREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class ImportHostKeyRequestPrivate;

class QTAWSTRANSFER_EXPORT ImportHostKeyRequest : public TransferRequest {

public:
    ImportHostKeyRequest(const ImportHostKeyRequest &other);
    ImportHostKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportHostKeyRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
