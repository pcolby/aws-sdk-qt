// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONRESPONSE_H
#define QTAWS_GETCONFIGURATIONRESPONSE_H

#include "inspector2response.h"
#include "getconfigurationrequest.h"

namespace QtAws {
namespace Inspector2 {

class GetConfigurationResponsePrivate;

class QTAWSINSPECTOR2_EXPORT GetConfigurationResponse : public Inspector2Response {
    Q_OBJECT

public:
    GetConfigurationResponse(const GetConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConfigurationResponse)
    Q_DISABLE_COPY(GetConfigurationResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
