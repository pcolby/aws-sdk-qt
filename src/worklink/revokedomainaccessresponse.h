// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEDOMAINACCESSRESPONSE_H
#define QTAWS_REVOKEDOMAINACCESSRESPONSE_H

#include "worklinkresponse.h"
#include "revokedomainaccessrequest.h"

namespace QtAws {
namespace WorkLink {

class RevokeDomainAccessResponsePrivate;

class QTAWSWORKLINK_EXPORT RevokeDomainAccessResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    RevokeDomainAccessResponse(const RevokeDomainAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RevokeDomainAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeDomainAccessResponse)
    Q_DISABLE_COPY(RevokeDomainAccessResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
