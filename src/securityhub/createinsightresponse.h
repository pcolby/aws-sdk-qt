// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSIGHTRESPONSE_H
#define QTAWS_CREATEINSIGHTRESPONSE_H

#include "securityhubresponse.h"
#include "createinsightrequest.h"

namespace QtAws {
namespace SecurityHub {

class CreateInsightResponsePrivate;

class QTAWSSECURITYHUB_EXPORT CreateInsightResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    CreateInsightResponse(const CreateInsightRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateInsightRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInsightResponse)
    Q_DISABLE_COPY(CreateInsightResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
