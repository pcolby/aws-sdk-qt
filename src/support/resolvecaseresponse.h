// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVECASERESPONSE_H
#define QTAWS_RESOLVECASERESPONSE_H

#include "supportresponse.h"
#include "resolvecaserequest.h"

namespace QtAws {
namespace Support {

class ResolveCaseResponsePrivate;

class QTAWSSUPPORT_EXPORT ResolveCaseResponse : public SupportResponse {
    Q_OBJECT

public:
    ResolveCaseResponse(const ResolveCaseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResolveCaseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResolveCaseResponse)
    Q_DISABLE_COPY(ResolveCaseResponse)

};

} // namespace Support
} // namespace QtAws

#endif
