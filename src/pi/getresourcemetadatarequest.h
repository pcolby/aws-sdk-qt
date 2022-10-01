// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEMETADATAREQUEST_H
#define QTAWS_GETRESOURCEMETADATAREQUEST_H

#include "pirequest.h"

namespace QtAws {
namespace Pi {

class GetResourceMetadataRequestPrivate;

class QTAWSPI_EXPORT GetResourceMetadataRequest : public PiRequest {

public:
    GetResourceMetadataRequest(const GetResourceMetadataRequest &other);
    GetResourceMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceMetadataRequest)

};

} // namespace Pi
} // namespace QtAws

#endif
