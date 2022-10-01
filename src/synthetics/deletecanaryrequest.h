// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECANARYREQUEST_H
#define QTAWS_DELETECANARYREQUEST_H

#include "syntheticsrequest.h"

namespace QtAws {
namespace Synthetics {

class DeleteCanaryRequestPrivate;

class QTAWSSYNTHETICS_EXPORT DeleteCanaryRequest : public SyntheticsRequest {

public:
    DeleteCanaryRequest(const DeleteCanaryRequest &other);
    DeleteCanaryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCanaryRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
