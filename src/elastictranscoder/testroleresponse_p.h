// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTROLERESPONSE_P_H
#define QTAWS_TESTROLERESPONSE_P_H

#include "elastictranscoderresponse_p.h"

namespace QtAws {
namespace ElasticTranscoder {

class TestRoleResponse;

class TestRoleResponsePrivate : public ElasticTranscoderResponsePrivate {

public:

    explicit TestRoleResponsePrivate(TestRoleResponse * const q);

    void parseTestRoleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestRoleResponse)
    Q_DISABLE_COPY(TestRoleResponsePrivate)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
