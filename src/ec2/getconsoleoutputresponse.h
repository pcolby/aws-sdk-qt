// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONSOLEOUTPUTRESPONSE_H
#define QTAWS_GETCONSOLEOUTPUTRESPONSE_H

#include "ec2response.h"
#include "getconsoleoutputrequest.h"

namespace QtAws {
namespace Ec2 {

class GetConsoleOutputResponsePrivate;

class QTAWSEC2_EXPORT GetConsoleOutputResponse : public Ec2Response {
    Q_OBJECT

public:
    GetConsoleOutputResponse(const GetConsoleOutputRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetConsoleOutputRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConsoleOutputResponse)
    Q_DISABLE_COPY(GetConsoleOutputResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
