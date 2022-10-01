// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSERVICESOFTWAREUPDATEREQUEST_H
#define QTAWS_STARTSERVICESOFTWAREUPDATEREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class StartServiceSoftwareUpdateRequestPrivate;

class QTAWSOPENSEARCH_EXPORT StartServiceSoftwareUpdateRequest : public OpenSearchRequest {

public:
    StartServiceSoftwareUpdateRequest(const StartServiceSoftwareUpdateRequest &other);
    StartServiceSoftwareUpdateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartServiceSoftwareUpdateRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
