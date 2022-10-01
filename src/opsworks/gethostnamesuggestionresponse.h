// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTNAMESUGGESTIONRESPONSE_H
#define QTAWS_GETHOSTNAMESUGGESTIONRESPONSE_H

#include "opsworksresponse.h"
#include "gethostnamesuggestionrequest.h"

namespace QtAws {
namespace OpsWorks {

class GetHostnameSuggestionResponsePrivate;

class QTAWSOPSWORKS_EXPORT GetHostnameSuggestionResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    GetHostnameSuggestionResponse(const GetHostnameSuggestionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetHostnameSuggestionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHostnameSuggestionResponse)
    Q_DISABLE_COPY(GetHostnameSuggestionResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
