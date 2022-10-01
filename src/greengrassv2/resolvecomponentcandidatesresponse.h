// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVECOMPONENTCANDIDATESRESPONSE_H
#define QTAWS_RESOLVECOMPONENTCANDIDATESRESPONSE_H

#include "greengrassv2response.h"
#include "resolvecomponentcandidatesrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class ResolveComponentCandidatesResponsePrivate;

class QTAWSGREENGRASSV2_EXPORT ResolveComponentCandidatesResponse : public GreengrassV2Response {
    Q_OBJECT

public:
    ResolveComponentCandidatesResponse(const ResolveComponentCandidatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResolveComponentCandidatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResolveComponentCandidatesResponse)
    Q_DISABLE_COPY(ResolveComponentCandidatesResponse)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
