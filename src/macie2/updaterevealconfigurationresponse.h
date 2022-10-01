// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREVEALCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEREVEALCONFIGURATIONRESPONSE_H

#include "macie2response.h"
#include "updaterevealconfigurationrequest.h"

namespace QtAws {
namespace Macie2 {

class UpdateRevealConfigurationResponsePrivate;

class QTAWSMACIE2_EXPORT UpdateRevealConfigurationResponse : public Macie2Response {
    Q_OBJECT

public:
    UpdateRevealConfigurationResponse(const UpdateRevealConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRevealConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRevealConfigurationResponse)
    Q_DISABLE_COPY(UpdateRevealConfigurationResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
