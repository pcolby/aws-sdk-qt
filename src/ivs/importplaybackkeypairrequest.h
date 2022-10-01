// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTPLAYBACKKEYPAIRREQUEST_H
#define QTAWS_IMPORTPLAYBACKKEYPAIRREQUEST_H

#include "ivsrequest.h"

namespace QtAws {
namespace Ivs {

class ImportPlaybackKeyPairRequestPrivate;

class QTAWSIVS_EXPORT ImportPlaybackKeyPairRequest : public IvsRequest {

public:
    ImportPlaybackKeyPairRequest(const ImportPlaybackKeyPairRequest &other);
    ImportPlaybackKeyPairRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportPlaybackKeyPairRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
