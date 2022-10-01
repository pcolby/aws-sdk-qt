// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREVEALCONFIGURATIONRESPONSE_H
#define QTAWS_GETREVEALCONFIGURATIONRESPONSE_H

#include "macie2response.h"
#include "getrevealconfigurationrequest.h"

namespace QtAws {
namespace Macie2 {

class GetRevealConfigurationResponsePrivate;

class QTAWSMACIE2_EXPORT GetRevealConfigurationResponse : public Macie2Response {
    Q_OBJECT

public:
    GetRevealConfigurationResponse(const GetRevealConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRevealConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRevealConfigurationResponse)
    Q_DISABLE_COPY(GetRevealConfigurationResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
