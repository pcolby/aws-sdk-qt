// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEACCESSLOGSRESPONSE_H
#define QTAWS_GENERATEACCESSLOGSRESPONSE_H

#include "amplifyresponse.h"
#include "generateaccesslogsrequest.h"

namespace QtAws {
namespace Amplify {

class GenerateAccessLogsResponsePrivate;

class QTAWSAMPLIFY_EXPORT GenerateAccessLogsResponse : public AmplifyResponse {
    Q_OBJECT

public:
    GenerateAccessLogsResponse(const GenerateAccessLogsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GenerateAccessLogsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateAccessLogsResponse)
    Q_DISABLE_COPY(GenerateAccessLogsResponse)

};

} // namespace Amplify
} // namespace QtAws

#endif
