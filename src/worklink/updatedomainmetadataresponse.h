// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINMETADATARESPONSE_H
#define QTAWS_UPDATEDOMAINMETADATARESPONSE_H

#include "worklinkresponse.h"
#include "updatedomainmetadatarequest.h"

namespace QtAws {
namespace WorkLink {

class UpdateDomainMetadataResponsePrivate;

class QTAWSWORKLINK_EXPORT UpdateDomainMetadataResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    UpdateDomainMetadataResponse(const UpdateDomainMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDomainMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDomainMetadataResponse)
    Q_DISABLE_COPY(UpdateDomainMetadataResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
