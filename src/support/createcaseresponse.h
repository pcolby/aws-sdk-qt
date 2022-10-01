// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECASERESPONSE_H
#define QTAWS_CREATECASERESPONSE_H

#include "supportresponse.h"
#include "createcaserequest.h"

namespace QtAws {
namespace Support {

class CreateCaseResponsePrivate;

class QTAWSSUPPORT_EXPORT CreateCaseResponse : public SupportResponse {
    Q_OBJECT

public:
    CreateCaseResponse(const CreateCaseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCaseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCaseResponse)
    Q_DISABLE_COPY(CreateCaseResponse)

};

} // namespace Support
} // namespace QtAws

#endif
