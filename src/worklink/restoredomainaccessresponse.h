// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDOMAINACCESSRESPONSE_H
#define QTAWS_RESTOREDOMAINACCESSRESPONSE_H

#include "worklinkresponse.h"
#include "restoredomainaccessrequest.h"

namespace QtAws {
namespace WorkLink {

class RestoreDomainAccessResponsePrivate;

class QTAWSWORKLINK_EXPORT RestoreDomainAccessResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    RestoreDomainAccessResponse(const RestoreDomainAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreDomainAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreDomainAccessResponse)
    Q_DISABLE_COPY(RestoreDomainAccessResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
