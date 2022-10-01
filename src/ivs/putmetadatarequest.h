// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETADATAREQUEST_H
#define QTAWS_PUTMETADATAREQUEST_H

#include "ivsrequest.h"

namespace QtAws {
namespace Ivs {

class PutMetadataRequestPrivate;

class QTAWSIVS_EXPORT PutMetadataRequest : public IvsRequest {

public:
    PutMetadataRequest(const PutMetadataRequest &other);
    PutMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMetadataRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
